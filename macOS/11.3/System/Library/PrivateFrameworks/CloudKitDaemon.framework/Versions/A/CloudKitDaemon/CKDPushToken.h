/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface CKDPushToken : NSObject {

	NSString* _apsEnvironmentString;
	NSData* _apsToken;

}

@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (nonatomic,retain) NSData * apsToken;                            //@synthesize apsToken=_apsToken - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)apsToken;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(NSString *)apsEnvironmentString;
-(void)setApsToken:(NSData *)arg1 ;
@end

