/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Versions/A/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UAPBIRConverter.h>

@class NSString;

@interface UAPBIRIdentityConverter : NSObject <UAPBIRConverter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerConverter;
-(id)typeString;
-(id)convertPlatformDataToIR:(id)arg1 ;
-(id)convertIRDataToPlatform:(id)arg1 ;
@end

