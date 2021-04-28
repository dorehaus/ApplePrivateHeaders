/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class SAUIColor, SAIntentGroupDetailLabelTemplateComponent, SALocation, NSString;

@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,retain) SAUIColor * color; 
@property (nonatomic,retain) SAIntentGroupDetailLabelTemplateComponent * detailLabelComponent; 
@property (assign,nonatomic) char interactive; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * mapSize; 
@property (nonatomic,retain) id<SAIntentGroupSetMapLocation> updateLocationCommand; 
+(id)mapSnippetTemplate;
+(id)mapSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocation *)location;
-(id)groupIdentifier;
-(SAUIColor *)color;
-(void)setColor:(SAUIColor *)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
-(NSString *)mapSize;
-(id)encodedClassName;
-(SAIntentGroupDetailLabelTemplateComponent *)detailLabelComponent;
-(void)setDetailLabelComponent:(SAIntentGroupDetailLabelTemplateComponent *)arg1 ;
-(char)interactive;
-(void)setInteractive:(char)arg1 ;
-(void)setMapSize:(NSString *)arg1 ;
-(id<SAIntentGroupSetMapLocation>)updateLocationCommand;
-(void)setUpdateLocationCommand:(id<SAIntentGroupSetMapLocation>)arg1 ;
@end
