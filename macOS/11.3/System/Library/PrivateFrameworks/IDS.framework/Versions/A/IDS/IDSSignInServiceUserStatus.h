/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IDSSignInServiceUserStatus : NSObject {

	unsigned long long _serviceType;
	NSArray* _serviceUserInfos;

}

@property (nonatomic,readonly) unsigned long long serviceType;                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSArray * serviceUserInfos;                        //@synthesize serviceUserInfos=_serviceUserInfos - In the implementation block
@property (nonatomic,readonly) unsigned long long phoneUserStatus; 
@property (nonatomic,readonly) unsigned long long appleIDUserStatus; 
-(id)description;
-(unsigned long long)serviceType;
-(id)initWithServiceType:(unsigned long long)arg1 userInfos:(id)arg2 ;
-(unsigned long long)phoneUserStatus;
-(unsigned long long)appleIDUserStatus;
-(NSArray *)serviceUserInfos;
@end

