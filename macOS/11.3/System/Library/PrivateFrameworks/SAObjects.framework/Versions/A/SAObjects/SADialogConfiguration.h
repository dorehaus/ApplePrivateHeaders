/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SADialogConfiguration : SABaseAceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)languageCode;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(id<SAAceSerializable>)context;
-(id)groupIdentifier;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodedClassName;
@end

