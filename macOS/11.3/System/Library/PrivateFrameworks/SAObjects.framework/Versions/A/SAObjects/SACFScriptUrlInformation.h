/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>

@class NSURL, NSDictionary, NSString;

@interface SACFScriptUrlInformation : SABaseAceObject

@property (nonatomic,copy) NSURL * downloadUrl; 
@property (nonatomic,copy) NSDictionary * headerFields; 
@property (nonatomic,copy) NSString * requestMethodType; 
+(id)scriptUrlInformation;
+(id)scriptUrlInformationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDictionary *)headerFields;
-(id)encodedClassName;
-(NSURL *)downloadUrl;
-(void)setDownloadUrl:(NSURL *)arg1 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(NSString *)requestMethodType;
-(void)setRequestMethodType:(NSString *)arg1 ;
@end

