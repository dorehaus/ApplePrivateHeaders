/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVOutputDeviceFrecentsReading.h>

@class NSArray, NSString;

@interface AVOutputDeviceLegacyFrecentsReader : NSObject <AVOutputDeviceFrecentsReading>

@property (nonatomic,readonly) NSArray * deviceIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFrecentsReader;
-(NSArray *)deviceIDs;
-(id)frecencyInfoForDeviceWithID:(id)arg1 ;
@end

