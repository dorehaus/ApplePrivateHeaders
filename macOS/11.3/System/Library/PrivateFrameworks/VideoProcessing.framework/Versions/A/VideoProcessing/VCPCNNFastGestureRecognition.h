/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModelEspresso;

@interface VCPCNNFastGestureRecognition : NSObject {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;

}
+(id)detector;
-(void)dealloc;
-(id)init;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)createInput:(float*)arg1 keypoints:(CGPoint*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
-(int)getDetectionScore:(float*)arg1 ;
-(int)planDestroy;
-(int)gestureDetection:(CGPoint*)arg1 score:(float*)arg2 ;
@end

