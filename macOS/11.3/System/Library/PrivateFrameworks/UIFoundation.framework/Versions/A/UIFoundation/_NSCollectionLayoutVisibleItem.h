/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSIndexPath;


@protocol _NSCollectionLayoutVisibleItem <NSObject,NSCollectionLayoutVisibleItem>
@property (assign) double alpha; 
@property (assign) long long zIndex; 
@property (getter=isHidden) char hidden; 
@property (assign) CGPoint center; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) CATransform3D transform3D; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) long long representedElementCategory; 
@property (nonatomic,readonly) NSString * representedElementKind; 
@required
-(NSString *)name;
-(char)isHidden;
-(void)setHidden:(char)arg1;
-(CGAffineTransform)transform;
-(NSIndexPath *)indexPath;
-(CGRect)frame;
-(CGRect)bounds;
-(CGPoint)center;
-(double)alpha;
-(void)setAlpha:(double)arg1;
-(void)setTransform:(CGAffineTransform)arg1;
-(void)setZIndex:(long long)arg1;
-(long long)representedElementCategory;
-(NSString *)representedElementKind;
-(CATransform3D)transform3D;
-(void)setCenter:(CGPoint)arg1;
-(long long)zIndex;
-(void)setTransform3D:(CATransform3D)arg1;

@end

