/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@class NSBezierPath, NSFont, NSString;

@interface SCNText : SCNGeometry {

	float _flatness;
	float _chamferRadius;
	float _extrusionDepth;
	float _discretizedStraightLineMaxLength;
	NSBezierPath* _chamferProfile;
	long long _primitiveType;
	id _string;
	NSFont* _font;
	char _wrapped;
	int _alignmentMode;
	int _truncationMode;
	char _useCustomContainerFrame;
	CGRect _customContainerFrame;
	char __wantsSeparateGeometryElements;

}

@property (assign,nonatomic) double extrusionDepth; 
@property (nonatomic,copy) id string; 
@property (nonatomic,retain) NSFont * font; 
@property (assign,getter=isWrapped,nonatomic) char wrapped; 
@property (assign,nonatomic) CGRect containerFrame; 
@property (nonatomic,readonly) CGSize textSize; 
@property (nonatomic,copy) NSString * truncationMode; 
@property (nonatomic,copy) NSString * alignmentMode; 
@property (assign,nonatomic) double chamferRadius; 
@property (assign,nonatomic) long long chamferSegmentCount; 
@property (nonatomic,copy) NSBezierPath * chamferProfile; 
@property (assign,nonatomic) double flatness; 
+(char)supportsSecureCoding;
+(id)text;
+(id)textWithString:(id)arg1 extrusionDepth:(double)arg2 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(char)isWrapped;
-(CGRect)containerFrame;
-(void)setContainerFrame:(CGRect)arg1 ;
-(NSFont *)font;
-(void)setFont:(NSFont *)arg1 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
-(long long)primitiveType;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(SCD_Struct_SC171*)params;
-(void)setTruncationMode:(NSString *)arg1 ;
-(void)setWrapped:(char)arg1 ;
-(CGSize)textSize;
-(char)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(char)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)presentationGeometry;
-(void)setPrimitiveType:(long long)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DTextGeometry*)arg1 ;
-(void)setChamferRadius:(double)arg1 ;
-(double)chamferRadius;
-(long long)chamferSegmentCount;
-(void)setChamferSegmentCount:(long long)arg1 ;
-(double)extrusionDepth;
-(void)setExtrusionDepth:(double)arg1 ;
-(NSBezierPath *)chamferProfile;
-(void)setChamferProfile:(NSBezierPath *)arg1 ;
-(NSString *)truncationMode;
-(NSString *)alignmentMode;
-(id)patchFont:(id)arg1 ;
-(id)initPresentationTextGeometryWithTextGeometryRef:(_C3DTextGeometry*)arg1 ;
-(id)initWithTextGeometryRef:(_C3DTextGeometry*)arg1 ;
-(void)_customEncodingOfSCNText:(id)arg1 ;
-(void)_customDecodingOfSCNText:(id)arg1 ;
-(void)setDiscretizedStraightLineMaxLength:(double)arg1 ;
-(void)set_wantsSeparateGeometryElements:(char)arg1 ;
-(id)copyAnimationPathForKeyPath:(id)arg1 animation:(id)arg2 ;
-(char)_wantsSeparateGeometryElements;
-(double)discretizedStraightLineMaxLength;
@end

