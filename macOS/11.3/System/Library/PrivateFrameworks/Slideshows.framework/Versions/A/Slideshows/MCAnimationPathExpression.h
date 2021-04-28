/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCAnimationPath.h>

@class NSString;

@interface MCAnimationPathExpression : MCAnimationPath {

	NSString* mExpression;

}

@property (copy) NSString * expression; 
+(id)animationPathWithKey:(id)arg1 andExpression:(id)arg2 ;
-(void)setExpression:(NSString *)arg1 ;
-(id)xmlElement;
-(id)imprint;
-(NSString *)expression;
-(void)demolish;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
@end

