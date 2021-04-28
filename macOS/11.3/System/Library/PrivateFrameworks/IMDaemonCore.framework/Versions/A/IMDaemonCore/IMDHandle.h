/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IMDHandle : NSObject {

	NSString* _id;
	NSString* _unformattedID;
	NSString* _countryCode;
	NSString* _personCentricID;
	NSString* _CNContactID;

}

@property (nonatomic,retain) NSString * ID;                                   //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * unformattedID;                        //@synthesize unformattedID=_unformattedID - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * handleInfo; 
@property (nonatomic,retain) NSString * personCentricID;                      //@synthesize personCentricID=_personCentricID - In the implementation block
@property (nonatomic,copy) NSString * CNContactID;                            //@synthesize CNContactID=_CNContactID - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)countryCode;
-(NSString *)ID;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)unformattedID;
-(void)setUnformattedID:(NSString *)arg1 ;
-(void)setPersonCentricID:(NSString *)arg1 ;
-(NSString *)personCentricID;
-(void)setID:(NSString *)arg1 ;
-(char)isBusiness;
-(long long)compareIDs:(id)arg1 ;
-(NSDictionary *)handleInfo;
-(char)isBetterDefinedThan:(id)arg1 ;
-(id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 ;
-(NSString *)CNContactID;
-(void)setCNContactID:(NSString *)arg1 ;
-(id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 personCentricID:(id)arg4 ;
@end

