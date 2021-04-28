/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (assign,nonatomic) long long displayNameOrder; 
@property (assign,nonatomic) long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) char shortNameFormatEnabled; 
@property (assign,nonatomic) char shortNameFormatPrefersNicknames; 
@property (readonly) long long sortOrder; 
@property (copy,readonly) NSString * countryCode; 
+(id)sharedDefaults;
+(void)flushSharedInstance;
-(id)init;
-(NSString *)countryCode;
-(long long)shortNameFormat;
-(void)setShortNameFormat:(long long)arg1 ;
-(long long)sortOrder;
-(char)isShortNameFormatEnabled;
-(void)setShortNameFormatEnabled:(char)arg1 ;
-(long long)displayNameOrder;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(id)changeNotificationName;
-(long long)newContactDisplayNameOrder;
-(void)setShortNameFormatPrefersNicknames:(char)arg1 ;
-(char)shortNameFormatPrefersNicknames;
@end

