#import "SWGDataCollectorBaseRequest.h"

@implementation SWGDataCollectorBaseRequest

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"deviceId": @"device_id", @"eventProperties": @"event_properties", @"eventTimestamp": @"event_timestamp", @"requestType": @"request_type", @"sendTimestamp": @"send_timestamp", @"userId": @"user_id" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"deviceId", @"eventProperties", @"userId"];
  return [optionalProperties containsObject:propertyName];
}

@end
