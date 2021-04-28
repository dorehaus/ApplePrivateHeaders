/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UXKit/UXKit-Structs.h>
@class NSMutableArray, NSDictionary;

@interface _UXFlowLayoutInfo : NSObject {

	NSMutableArray* _sections;
	char _useFloatingHeaderFooter;
	char _horizontal;
	char _leftToRight;
	CGRect _visibleBounds;
	CGSize _layoutSize;
	double _dimension;
	char _isValid;
	NSDictionary* _rowAlignmentOptions;
	char _usesFloatingHeaderFooter;
	CGSize _contentSize;

}

@property (nonatomic,readonly) NSMutableArray * sections;                     //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) char usesFloatingHeaderFooter;                   //@synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter - In the implementation block
@property (assign,nonatomic) double dimension;                                //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic) char horizontal;                                 //@synthesize horizontal=_horizontal - In the implementation block
@property (assign,nonatomic) char leftToRight;                                //@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) NSDictionary * rowAlignmentOptions;              //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
-(id)copy;
-(void)dealloc;
-(id)init;
-(double)dimension;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(id)snapshot;
-(void)setHorizontal:(char)arg1 ;
-(char)horizontal;
-(void)invalidate:(char)arg1 ;
-(void)setDimension:(double)arg1 ;
-(NSMutableArray *)sections;
-(char)leftToRight;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(NSDictionary *)rowAlignmentOptions;
-(void)setRowAlignmentOptions:(NSDictionary *)arg1 ;
-(id)addSection;
-(char)usesFloatingHeaderFooter;
-(void)setUsesFloatingHeaderFooter:(char)arg1 ;
-(void)setLeftToRight:(char)arg1 ;
@end

