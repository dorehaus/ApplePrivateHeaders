/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, SAUIImageResource, NSNumber;

@interface SAUIImageView : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSNumber * tintColor; 
+(id)imageView;
+(id)imageViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(id)groupIdentifier;
-(SAUIImageResource *)image;
-(NSNumber *)tintColor;
-(void)setTintColor:(NSNumber *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)encodedClassName;
@end

