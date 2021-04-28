/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, KNAnimParameterSavedGroup;

@interface KNAnimParameterGroup : NSObject {

	NSString* _name;
	KNAnimParameterSavedGroup* _savedGroup;
	NSString* _fileName;

}

@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) KNAnimParameterSavedGroup * savedGroup;              //@synthesize savedGroup=_savedGroup - In the implementation block
@property (nonatomic,copy) NSString * fileName;                                   //@synthesize fileName=_fileName - In the implementation block
+(void)p_loadAllParametersIfNecessary;
+(id)mediaTimingFunctionForPath:(id)arg1 reversed:(char)arg2 ;
+(id)parameterGroupForName:(id)arg1 ;
+(id)linearPath;
+(id)easeInEaseOutPath;
+(id)easeInPath;
+(id)easeOutPath;
-(NSString *)name;
-(char)boolForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileName;
-(id)initWithFileName:(id)arg1 ;
-(KNAnimParameterSavedGroup *)savedGroup;
-(id)pathForAnimationCurve:(id)arg1 ;
-(id)mediaTimingFunctionForAnimationCurve:(id)arg1 reversed:(char)arg2 ;
-(void)p_loadParameters;
-(void)setSavedGroup:(KNAnimParameterSavedGroup *)arg1 ;
-(double)doubleForAnimationCurve:(id)arg1 atPercent:(double)arg2 ;
-(id)mediaTimingFunctionForAnimationCurve:(id)arg1 ;
@end

