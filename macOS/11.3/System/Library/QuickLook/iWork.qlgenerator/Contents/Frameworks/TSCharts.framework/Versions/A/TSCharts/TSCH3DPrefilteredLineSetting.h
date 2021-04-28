/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSDStroke;

@interface TSCH3DPrefilteredLineSetting : NSObject {

	char _disableColorOutput;
	char _cullBackfaces;
	char _useNormals;
	tvec4<float> _filterRadius;
	float _lineWidth;
	tvec4<float> _strokeColor;
	TSDStroke* _stroke;

}

@property (assign,nonatomic) char useNormals;                        //@synthesize useNormals=_useNormals - In the implementation block
@property (assign,nonatomic) char disableColorOutput;                //@synthesize disableColorOutput=_disableColorOutput - In the implementation block
@property (assign,nonatomic) char cullBackfaces;                     //@synthesize cullBackfaces=_cullBackfaces - In the implementation block
@property (assign,nonatomic) tvec4<float> filterRadius;              //@synthesize filterRadius=_filterRadius - In the implementation block
@property (assign,nonatomic) float lineWidth;                        //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) tvec4<float> strokeColor;               //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,copy) TSDStroke * stroke;                       //@synthesize stroke=_stroke - In the implementation block
+(id)setting;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)setLineWidth:(float)arg1 ;
-(float)lineWidth;
-(TSDStroke *)stroke;
-(tvec4<float>)strokeColor;
-(void)setStrokeColor:(tvec4<float>)arg1 ;
-(void)setStroke:(TSDStroke *)arg1 ;
-(void)setFilterRadius:(tvec4<float>)arg1 ;
-(char)useNormals;
-(void)setUseNormals:(char)arg1 ;
-(char)disableColorOutput;
-(void)setDisableColorOutput:(char)arg1 ;
-(char)cullBackfaces;
-(void)setCullBackfaces:(char)arg1 ;
-(tvec4<float>)filterRadius;
@end

