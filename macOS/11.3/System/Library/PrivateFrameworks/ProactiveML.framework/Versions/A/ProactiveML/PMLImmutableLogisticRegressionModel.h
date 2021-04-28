/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>
#import <libobjc.A.dylib/PMLMultiLabelClassifierProtocol.h>

@class NSString;

@interface PMLImmutableLogisticRegressionModel : NSObject <PMLPlistAndChunksSerializableProtocol, PMLMultiLabelClassifierProtocol> {

	id _backingObject;
	const float* _weights;
	int _length;
	char _intercept;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)predict:(id)arg1 ;
-(char)intercept;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(unsigned long long)outputDimension;
-(id)initWithWeights:(id)arg1 intercept:(char)arg2 ;
-(id)initWithChunk:(id)arg1 intercept:(char)arg2 ;
-(id)initWithFloatsNoCopy:(const float*)arg1 count:(int)arg2 intercept:(char)arg3 ;
-(id)toChunk;
@end

