/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKFormFeature.h>

@class AKFormFeatureLine;

@interface AKFormFeatureBox : AKFormFeature {

	char _widthExpands;
	char _multiline;
	unsigned long long _flags;
	unsigned long long _alignment;
	AKFormFeatureLine* _baseline;
	CGRect _enclosingRegionRect;

}

@property (assign,nonatomic) unsigned long long flags;                       //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) char widthExpands;                              //@synthesize widthExpands=_widthExpands - In the implementation block
@property (assign,getter=isMultiline,nonatomic) char multiline;              //@synthesize multiline=_multiline - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) AKFormFeatureLine * baseline;                   //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) CGRect enclosingRegionRect;                     //@synthesize enclosingRegionRect=_enclosingRegionRect - In the implementation block
+(id)boxWithRect:(CGRect)arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4 ;
-(unsigned long long)flags;
-(void)setAlignment:(unsigned long long)arg1 ;
-(unsigned long long)alignment;
-(void)setFlags:(unsigned long long)arg1 ;
-(char)isMultiline;
-(void)setMultiline:(char)arg1 ;
-(void)setBaseline:(AKFormFeatureLine *)arg1 ;
-(AKFormFeatureLine *)baseline;
-(void)setEnclosingRegionRect:(CGRect)arg1 ;
-(CGRect)enclosingRegionRect;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4 ;
-(char)widthExpands;
-(void)setWidthExpands:(char)arg1 ;
@end

