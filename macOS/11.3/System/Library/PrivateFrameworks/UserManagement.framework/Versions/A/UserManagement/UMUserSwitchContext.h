/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/Versions/A/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSDictionary;

@interface UMUserSwitchContext : NSObject {

	char _secondaryActionRequired;
	NSData* _setupData;
	NSString* _shortLivedToken;
	NSDictionary* _environmentsByServices;

}

@property (nonatomic,copy) NSData * setupData;                                 //@synthesize setupData=_setupData - In the implementation block
@property (nonatomic,copy) NSString * shortLivedToken;                         //@synthesize shortLivedToken=_shortLivedToken - In the implementation block
@property (assign,nonatomic) char secondaryActionRequired;                     //@synthesize secondaryActionRequired=_secondaryActionRequired - In the implementation block
@property (nonatomic,copy) NSDictionary * environmentsByServices;              //@synthesize environmentsByServices=_environmentsByServices - In the implementation block
+(id)contextWithSetupData:(id)arg1 shortLivedToken:(id)arg2 secondaryActionRequired:(char)arg3 ;
+(id)contextWithDataRepresentation:(id)arg1 ;
-(id)description;
-(id)dataRepresentation;
-(void)setSetupData:(NSData *)arg1 ;
-(void)setShortLivedToken:(NSString *)arg1 ;
-(void)setSecondaryActionRequired:(char)arg1 ;
-(NSData *)setupData;
-(NSString *)shortLivedToken;
-(char)secondaryActionRequired;
-(NSDictionary *)environmentsByServices;
-(id)dictRepresentation;
-(void)setEnvironmentsByServices:(NSDictionary *)arg1 ;
@end

