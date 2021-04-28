/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class NSString;

@interface EWSCompleteNameType : NSObject <XSDefinitionProvider> {

	NSString* _Title;
	NSString* _FirstName;
	NSString* _MiddleName;
	NSString* _LastName;
	NSString* _Suffix;
	NSString* _Initials;
	NSString* _Nickname;
	NSString* _FullName;
	NSString* _YomiFirstName;
	NSString* _YomiLastName;

}

@property (nonatomic,copy) NSString * Title;                            //@synthesize Title=_Title - In the implementation block
@property (nonatomic,copy) NSString * FirstName;                        //@synthesize FirstName=_FirstName - In the implementation block
@property (nonatomic,copy) NSString * MiddleName;                       //@synthesize MiddleName=_MiddleName - In the implementation block
@property (nonatomic,copy) NSString * LastName;                         //@synthesize LastName=_LastName - In the implementation block
@property (setter=uffix,nonatomic,copy) NSString * Suffix;              //@synthesize Suffix=_Suffix - In the implementation block
@property (nonatomic,copy) NSString * Initials;                         //@synthesize Initials=_Initials - In the implementation block
@property (nonatomic,copy) NSString * Nickname;                         //@synthesize Nickname=_Nickname - In the implementation block
@property (nonatomic,copy) NSString * FullName;                         //@synthesize FullName=_FullName - In the implementation block
@property (nonatomic,copy) NSString * YomiFirstName;                    //@synthesize YomiFirstName=_YomiFirstName - In the implementation block
@property (nonatomic,copy) NSString * YomiLastName;                     //@synthesize YomiLastName=_YomiLastName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(NSString *)description;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(void)setInitials:(NSString *)arg1 ;
-(NSString *)Title;
-(NSString *)FirstName;
-(NSString *)MiddleName;
-(NSString *)LastName;
-(NSString *)Suffix;
-(NSString *)Initials;
-(NSString *)Nickname;
-(NSString *)FullName;
-(NSString *)YomiFirstName;
-(void)setYomiFirstName:(NSString *)arg1 ;
-(NSString *)YomiLastName;
-(void)setYomiLastName:(NSString *)arg1 ;
@end

