/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL, SAUIAppPunchOut, NSArray;

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * displayLink; 
@property (nonatomic,copy) NSURL * link; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSURL * searchUri; 
@property (nonatomic,copy) NSArray * thumbnails; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)linkedAnswer;
+(id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(NSString *)query;
-(void)setName:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setLink:(NSURL *)arg1 ;
-(NSURL *)link;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSString *)displayLink;
-(void)setDisplayLink:(NSString *)arg1 ;
-(NSURL *)searchUri;
-(void)setSearchUri:(NSURL *)arg1 ;
-(NSArray *)thumbnails;
-(void)setThumbnails:(NSArray *)arg1 ;
@end

