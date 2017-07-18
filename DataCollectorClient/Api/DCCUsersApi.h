#import <Foundation/Foundation.h>
#import "DCCDataCollectorNewUserRequest.h"
#import "DCCDataCollectorUpdateUserStateRequest.h"
#import "DCCApi.h"

/**
* Knetik.io Data Collector REST API
* <p>Use this API to send application data to Knetik.io including user/device information and transactional events.</p> <p>   Please consult the <a href=\"/doc\">official user documentation</a> to find out how to send data, and how this data is used. <p></p> <h2>Notes</h2> <br> New more ReSTful implementation of the telemetry data collection service. Legacy clients can still use the old API format, but we strongly recommend switching over to this new format. Navigate to the legacy documentation using the dropdown at the top of this page. <p></p> <h2>User IDs and Device IDs</h2> <br> Knetik.io can uniquely associate state, events and transactions to users and/or devices for your application. In order to accomplish this, each API call takes userId and deviceId as parameters in the request object. At least one of these must be provided in the request object, except as explicitly noted. <br> <p></p> <h2>Timestamps</h2> <br> All timestamp parameters must be epoch timestamps in milliseconds. <br> <p></p> <h2>Required Request Headers</h2> <br> The following HTTP header values must be provided for each API call: <ul>   <li>     <b>Content-Type: application/json</b>   </li> </ul> <p></p> <h2>Required Query Parameters</h2> <br> All API calls also require the following query parameters to be present on the URL: <ul>   <li>     <b>customer_id:</b> your unique customer ID   </li> </ul> <p></p> <h2>API Responses</h2> <br> If successful, API calls will simply return an HTTP response code of ACCEPTED (202) with no other data. If errors occur, a JSON payload will be returned containing detailed error information and an appropriate HTTP error status code will be provided (as documented in each of the API methods). <br> <p></p>
*
* OpenAPI spec version: 2.0
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface DCCUsersApi: NSObject <DCCApi>

extern NSString* kDCCUsersApiErrorDomain;
extern NSInteger kDCCUsersApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(DCCApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Submit a new user event
/// Declares to the Knetik.io platform that the user is new at the given point in time. If the 'checked' parameter is provided and set to 'true', however, the current state of the user in the Knetik.io platform is examined to determine if the user was previously declared as new and, if so, the user information is not updated in the Knetik.io platform.
///
/// @param customerId customerId
/// @param request New user information (optional)
/// @param checked Flag indicating whether the user state should be checked before updating the state in the Knetik.io platform (optional) (default to false)
/// 
///  code:202 message:"Successfully recorded",
///  code:400 message:"Invalid data provided in request",
///  code:401 message:"Customer not authorized for this service"
///
/// @return 
-(NSURLSessionTask*) newUserWithCustomerId: (NSString*) customerId
    request: (DCCDataCollectorNewUserRequest*) request
    checked: (NSNumber*) checked
    completionHandler: (void (^)(NSError* error)) handler;


/// Updates the entity state for the given user
/// 
///
/// @param _id ID of the user for whom state is being updated
/// @param customerId customerId
/// @param request Updated user state information (optional)
/// 
///  code:202 message:"Successfully recorded"
///
/// @return 
-(NSURLSessionTask*) updateUserStateWithId: (NSString*) _id
    customerId: (NSString*) customerId
    request: (DCCDataCollectorUpdateUserStateRequest*) request
    completionHandler: (void (^)(NSError* error)) handler;



@end
