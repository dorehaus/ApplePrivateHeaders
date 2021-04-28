/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADTextBody* mTextBody;
	OADOrientedBounds* mTextOrientedBounds;

}

@property (nonatomic,retain) OADOrientedBounds * textOrientedBounds; 
-(id)description;
-(id)init;
-(int)type;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)shapeProperties;
-(char)isTextBox;
-(id)textBody;
-(id)shapeStyle;
-(void)setTextBody:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)flattenProperties;
-(void)createPresetGeometryWithShapeType:(int)arg1 ;
-(OADOrientedBounds *)textOrientedBounds;
-(void)setTextOrientedBounds:(OADOrientedBounds *)arg1 ;
@end

