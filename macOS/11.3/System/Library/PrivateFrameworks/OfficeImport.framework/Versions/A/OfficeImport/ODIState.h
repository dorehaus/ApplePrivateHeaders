/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODDDiagram, OADOrientedBounds, OADGroup, NSMutableArray, OADShapeStyle, OADDrawingTheme;

@interface ODIState : NSObject {

	ODDDiagram* mDiagram;
	OADOrientedBounds* mDiagramOrientedBounds;
	CGRect mLogicalBounds;
	double mScale;
	OADGroup* mGroup;
	NSMutableArray* mPresentationNames;
	NSMutableArray* mDefaultStyleLabelNames;
	int mPointCount;
	int mPointIndex;
	OADShapeStyle* mTextStyle;
	OADDrawingTheme* mDrawingTheme;

}
-(void)setGroup:(id)arg1 ;
-(double)scale;
-(id)group;
-(id)textStyle;
-(void)setTextStyle:(id)arg1 ;
-(int)pointCount;
-(int)pointIndex;
-(void)setPointIndex:(int)arg1 ;
-(void)setPointCount:(int)arg1 ;
-(CGRect)logicalBounds;
-(id)diagram;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(id)presentationNameForPointType:(int)arg1 ;
-(id)drawingTheme;
-(id)defaultStyleLabelNameForPointType:(int)arg1 ;
-(void)setLogicalBounds:(CGRect)arg1 maintainAspectRatio:(char)arg2 ;
-(void)setPresentationName:(id)arg1 forPointType:(int)arg2 ;
-(id)diagramOrientedBounds;
-(id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3 ;
-(void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2 ;
@end

