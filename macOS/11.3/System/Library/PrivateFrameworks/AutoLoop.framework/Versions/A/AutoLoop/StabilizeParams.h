/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/Versions/A/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@interface StabilizeParams : NSObject {

	vector<SP_FrameInfo, std::__1::allocator<SP_FrameInfo>>* mFrameInfo;
	vector<CMTime, std::__1::allocator<CMTime>>* mFrameTimeArray;
	char passThrough;
	char sparseFrames;
	unsigned numFrames;
	unsigned version;
	SCD_Struct_Au1 roiStart;
	SCD_Struct_Au1 roiLength;
	CGRect cropRect;

}

@property (readonly) unsigned numFrames; 
@property (assign) CGRect cropRect; 
@property (assign) SCD_Struct_Au1 roiStart; 
@property (assign) SCD_Struct_Au1 roiLength; 
@property (assign) char passThrough; 
@property (assign) char sparseFrames; 
@property (readonly) unsigned version; 
+(id)stabilizeParamsFromNSDictionary:(id)arg1 ;
+(id)stabilizeParams;
+(id)stabilizeParamsFromURL:(id)arg1 ;
-(id)init;
-(unsigned)version;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(unsigned)numFrames;
-(id)initFromDict:(id)arg1 ;
-(void)append:(SCD_Struct_St19*)arg1 ;
-(char)writeToURL:(id)arg1 ;
-(vector<CMTime, std::__1::allocator<CMTime>>*)frameTimes;
-(SCD_Struct_Au1)roiLength;
-(id)infoAsDict;
-(void)setPassThrough:(char)arg1 ;
-(void)setRoiStart:(SCD_Struct_Au1)arg1 ;
-(void)setRoiLength:(SCD_Struct_Au1)arg1 ;
-(SCD_Struct_Au1)timeForFrame:(unsigned)arg1 ;
-(void)getFrameInfo:(unsigned)arg1 frameInfo:(SCD_Struct_St19*)arg2 ;
-(SCD_Struct_Au1)roiStart;
-(char)passThrough;
-(char)sparseFrames;
-(void)setSparseFrames:(char)arg1 ;
@end
