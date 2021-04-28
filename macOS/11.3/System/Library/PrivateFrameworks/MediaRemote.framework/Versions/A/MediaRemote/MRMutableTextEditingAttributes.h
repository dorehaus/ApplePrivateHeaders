/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRTextEditingAttributes.h>

@class NSString;

@interface MRMutableTextEditingAttributes : MRTextEditingAttributes

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * prompt; 
@property (assign,nonatomic) MRTextInputTraits inputTraits; 
-(void)setTitle:(NSString *)arg1 ;
-(void)setPrompt:(NSString *)arg1 ;
-(void)setInputTraits:(MRTextInputTraits)arg1 ;
@end
