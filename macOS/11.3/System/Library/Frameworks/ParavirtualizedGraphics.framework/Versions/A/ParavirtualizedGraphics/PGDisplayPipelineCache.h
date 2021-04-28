/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ParavirtualizedGraphics.framework/Versions/A/ParavirtualizedGraphics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLFunction;
@class NSMapTable;

@interface PGDisplayPipelineCache : NSObject {

	id<MTLDevice> _mtlDevice;
	id<MTLFunction> _vertexFunction;
	id<MTLFunction> _fragmentFunction;
	id<MTLFunction> _fragmentFunctionGamma;
	NSMapTable* _table;

}
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(id)pipelineForDescriptor:(id)arg1 ;
@end
