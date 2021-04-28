/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNSocialProfile.h>

@class NSString, NSArray;

@interface CNMutableSocialProfile : CNSocialProfile

@property (copy) NSString * urlString; 
@property (copy) NSString * username; 
@property (copy) NSString * userIdentifier; 
@property (copy) NSString * service; 
@property (copy) NSString * displayname; 
@property (copy) NSArray * bundleIdentifiers; 
@property (copy) NSString * teamIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
@end

