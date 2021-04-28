/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCPCNNBlock, VCPCNNMetalContext, VCPCNNData;

@interface VCPCNNModel : NSObject {

	VCPCNNBlock* _blocks[200];
	short _quantFactor;
	char _useGPU;
	VCPCNNMetalContext* _context;
	VCPCNNData* _output;

}

@property (readonly) VCPCNNData * output;              //@synthesize output=_output - In the implementation block
-(int)size;
-(id)init;
-(int)add:(id)arg1 ;
-(VCPCNNData *)output;
-(int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(id)initWithParameters:(short)arg1 useGPU:(char)arg2 ;
-(id)getGPUContext;
-(int)prepareNetworkFromURL:(id)arg1 withInputSize:(id)arg2 ;
-(int)forward:(id)arg1 ;
@end

