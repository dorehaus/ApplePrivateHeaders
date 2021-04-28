/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MPSCNNLossDataDescriptor : NSObject <NSCopying> {

	NSData* _data;
	unsigned long long _layout;
	MPSImageCoordinate _size;
	unsigned long long _bytesPerRow;
	unsigned long long _bytesPerImage;

}

@property (nonatomic,readonly) unsigned long long layout;                   //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) MPSImageCoordinate size;                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRow;                //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerImage;              //@synthesize bytesPerImage=_bytesPerImage - In the implementation block
+(id)cnnLossDataDescriptorWithData:(id)arg1 layout:(unsigned long long)arg2 size:(MPSImageCoordinate)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPSImageCoordinate)size;
-(void)dealloc;
-(id)debugDescription;
-(unsigned long long)layout;
-(unsigned long long)bytesPerRow;
-(unsigned long long)bytesPerImage;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(void)setBytesPerImage:(unsigned long long)arg1 ;
@end

