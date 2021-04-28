/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface ICScannerBandData : NSObject {

	char _bigEndian;
	unsigned long long _fullImageHeight;
	unsigned long long _fullImageWidth;
	unsigned long long _bitsPerPixel;
	unsigned long long _bitsPerComponent;
	unsigned long long _numComponents;
	unsigned long long _pixelDataType;
	NSString* _colorSyncProfilePath;
	unsigned long long _bytesPerRow;
	unsigned long long _dataStartRow;
	unsigned long long _dataNumRows;
	unsigned long long _dataSize;
	NSData* _dataBuffer;

}

@property (assign) unsigned long long fullImageWidth;                //@synthesize fullImageWidth=_fullImageWidth - In the implementation block
@property (assign) unsigned long long fullImageHeight;               //@synthesize fullImageHeight=_fullImageHeight - In the implementation block
@property (assign) unsigned long long bitsPerPixel;                  //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (assign) unsigned long long bitsPerComponent;              //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (assign) unsigned long long numComponents;                 //@synthesize numComponents=_numComponents - In the implementation block
@property (getter=isBigEndian) char bigEndian;                       //@synthesize bigEndian=_bigEndian - In the implementation block
@property (assign) unsigned long long pixelDataType;                 //@synthesize pixelDataType=_pixelDataType - In the implementation block
@property (retain) NSString * colorSyncProfilePath;                  //@synthesize colorSyncProfilePath=_colorSyncProfilePath - In the implementation block
@property (assign) unsigned long long bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign) unsigned long long dataStartRow;                  //@synthesize dataStartRow=_dataStartRow - In the implementation block
@property (assign) unsigned long long dataNumRows;                   //@synthesize dataNumRows=_dataNumRows - In the implementation block
@property (assign) unsigned long long dataSize;                      //@synthesize dataSize=_dataSize - In the implementation block
@property (retain) NSData * dataBuffer;                              //@synthesize dataBuffer=_dataBuffer - In the implementation block
-(NSString *)colorSyncProfilePath;
-(unsigned long long)dataStartRow;
-(unsigned long long)dataNumRows;
-(void)setColorSyncProfilePath:(NSString *)arg1 ;
-(unsigned long long)fullImageHeight;
-(void)setFullImageHeight:(unsigned long long)arg1 ;
-(unsigned long long)fullImageWidth;
-(void)setFullImageWidth:(unsigned long long)arg1 ;
-(void)setNumComponents:(unsigned long long)arg1 ;
-(void)setBigEndian:(char)arg1 ;
-(void)setDataStartRow:(unsigned long long)arg1 ;
-(void)setDataNumRows:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)bytesPerRow;
-(NSData *)dataBuffer;
-(unsigned long long)bitsPerPixel;
-(unsigned long long)bitsPerComponent;
-(unsigned long long)numComponents;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(unsigned long long)dataSize;
-(void)setDataSize:(unsigned long long)arg1 ;
-(void)setBitsPerPixel:(unsigned long long)arg1 ;
-(void)setBitsPerComponent:(unsigned long long)arg1 ;
-(char)isBigEndian;
-(void)setDataBuffer:(NSData *)arg1 ;
-(unsigned long long)pixelDataType;
-(void)setPixelDataType:(unsigned long long)arg1 ;
@end
