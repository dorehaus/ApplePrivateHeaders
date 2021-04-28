/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <ContactsFoundation/CNCoreDelegateInfo.h>

@class NSNumber, NSString, NSPersonNameComponents;

@interface CNCoreMutableDelegateInfo : CNCoreDelegateInfo

@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSString * altDSID; 
@property (nonatomic,copy) NSString * principalPath; 
@property (nonatomic,copy) NSString * appleID; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (assign,nonatomic) char isMe; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(char)isMe;
-(void)setIsMe:(char)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
@end

