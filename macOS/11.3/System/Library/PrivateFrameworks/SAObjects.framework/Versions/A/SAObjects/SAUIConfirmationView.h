/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIConfirmationView : SAAceView

@property (nonatomic,copy) NSArray * allConfirmationOptions; 
@property (nonatomic,copy) NSString * cancelTrigger; 
@property (nonatomic,copy) NSArray * confirmCommands; 
@property (nonatomic,copy) NSString * confirmText; 
@property (nonatomic,copy) NSArray * denyCommands; 
@property (nonatomic,copy) NSString * denyText; 
@property (nonatomic,copy) NSString * style; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
+(id)confirmationView;
+(id)confirmationViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)style;
-(void)setTitle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setStyle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)allConfirmationOptions;
-(void)setAllConfirmationOptions:(NSArray *)arg1 ;
-(NSString *)cancelTrigger;
-(void)setCancelTrigger:(NSString *)arg1 ;
-(NSArray *)confirmCommands;
-(void)setConfirmCommands:(NSArray *)arg1 ;
-(NSString *)confirmText;
-(void)setConfirmText:(NSString *)arg1 ;
-(NSArray *)denyCommands;
-(void)setDenyCommands:(NSArray *)arg1 ;
-(NSString *)denyText;
-(void)setDenyText:(NSString *)arg1 ;
@end

