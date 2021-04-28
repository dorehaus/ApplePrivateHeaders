/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFilterRendererParameters.h>

@class NSArray, CIFilter, NSString;

@interface BWCoreImageFilterRendererParameters : NSObject <BWFilterRendererParameters> {

	NSArray* _filters;
	CIFilter* _originalOutputFilter;
	char _requiresFaceLandmarks;
	char _requiresDepthMap;

}

@property (nonatomic,copy) NSArray * filters;                                    //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) CIFilter * originalOutputFilter;                    //@synthesize originalOutputFilter=_originalOutputFilter - In the implementation block
@property (nonatomic,readonly) char requiresDepthMap;                            //@synthesize requiresDepthMap=_requiresDepthMap - In the implementation block
@property (nonatomic,readonly) char requiresFaceLandmarks;                       //@synthesize requiresFaceLandmarks=_requiresFaceLandmarks - In the implementation block
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) float interpolationFractionComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)containsFilterRequiringFaceLandmarks:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(short)type;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(float)interpolationFractionComplete;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1 ;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3 ;
-(char)shouldInterpolateFromParameters:(id)arg1 toParameters:(id)arg2 ;
-(void)_ensureResourceRequirementsForFilters:(id)arg1 outputRequiresFaceLandmarks:(char*)arg2 outputRequiresDepthMap:(char*)arg3 ;
-(id)initWithFilters:(id)arg1 originalOutputFilter:(id)arg2 ;
-(int)depthTypeForFilter:(id)arg1 ;
-(CIFilter *)originalOutputFilter;
-(void)setOriginalOutputFilter:(CIFilter *)arg1 ;
-(char)requiresFaceLandmarks;
-(char)requiresDepthMap;
@end

