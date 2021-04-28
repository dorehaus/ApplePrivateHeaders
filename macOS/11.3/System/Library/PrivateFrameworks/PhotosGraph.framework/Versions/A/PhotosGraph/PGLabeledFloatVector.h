/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MAFloatVector;

@interface PGLabeledFloatVector : NSObject {

	MAFloatVector* _floatVector;
	MAFloatVector* _label;

}

@property (nonatomic,readonly) MAFloatVector * floatVector;              //@synthesize floatVector=_floatVector - In the implementation block
@property (nonatomic,readonly) MAFloatVector * label;                    //@synthesize label=_label - In the implementation block
-(MAFloatVector *)label;
-(MAFloatVector *)floatVector;
-(id)initWithFloatVector:(id)arg1 label:(id)arg2 ;
@end

