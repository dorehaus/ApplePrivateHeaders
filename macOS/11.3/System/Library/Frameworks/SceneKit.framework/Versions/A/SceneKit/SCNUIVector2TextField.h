/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNUIBindableView.h>

@class NSTextField;

@interface SCNUIVector2TextField : SCNUIBindableView {

	NSTextField* tx;
	NSTextField* ty;

}

@property (assign,nonatomic) CGSize vector2; 
-(id)value;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)vector2;
-(void)setVector2:(CGSize)arg1 ;
@end

