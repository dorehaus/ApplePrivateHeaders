/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ConsoleKit/ConsoleKit-Structs.h>
@interface CSKStreamNativeUtilities : NSObject
+(void)makeEntitiesFromActivityEvents:(id)arg1 usingTimeZone:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)entityFromRecordDictionary:(id)arg1 usingTimeZone:(id)arg2 ;
+(id)entityFromActivityEvent:(id)arg1 usingTimeZone:(id)arg2 ;
+(long long)_messageTypeForEventLogType:(unsigned long long)arg1 ;
+(long long)messageTypeForActivityEventMessageType:(unsigned char)arg1 ;
+(id)_createLossyStringForCString:(const char*)arg1 ;
+(id)_exclusionPredicateWithKey:(id)arg1 values:(id)arg2 ;
+(id)makeEntitiesFromSQLDatabase:(id)arg1 usingTimeZone:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)entityFromActivityEventProxy:(id)arg1 usingTimeZone:(id)arg2 ;
+(id)messageFromASLObject:(asl_object_sRef)arg1 ;
+(id)exclusionPredicateWithActivityEventProcessImagePaths:(id)arg1 ;
+(id)exclusionPredicateWithActivityEventSenderImagePaths:(id)arg1 ;
@end
