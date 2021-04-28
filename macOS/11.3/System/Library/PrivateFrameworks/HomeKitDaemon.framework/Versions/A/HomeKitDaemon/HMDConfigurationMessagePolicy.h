/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDConfigurationMessagePolicy : HMFMessagePolicy {

	unsigned long long _operationTypes;

}

@property (readonly) unsigned long long operationTypes;              //@synthesize operationTypes=_operationTypes - In the implementation block
+(id)policyWithOperationTypes:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)__initWithOperationTypes:(unsigned long long)arg1 ;
-(unsigned long long)operationTypes;
@end

