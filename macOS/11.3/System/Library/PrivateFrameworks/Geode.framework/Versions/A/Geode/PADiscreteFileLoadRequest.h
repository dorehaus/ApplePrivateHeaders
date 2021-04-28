/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/PALoadRequest.h>

@class NSURL, NSData;

@interface PADiscreteFileLoadRequest : PALoadRequest {

	NSURL* _url;
	NSData* _fileData;

}

@property (readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
@property (retain) NSData * fileData;              //@synthesize fileData=_fileData - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setFileData:(NSData *)arg1 ;
-(NSData *)fileData;
-(id)initWithURL:(id)arg1 cgOptions:(id)arg2 cacheHint:(id)arg3 tileHint:(id)arg4 sizePolicy:(id)arg5 ;
-(id)initWithURL:(id)arg1 cgOptions:(id)arg2 cacheHint:(id)arg3 tileHint:(id)arg4 ;
-(id)sortedKeyStringForDictionary:(id)arg1 ;
-(id)keyForRequest;
@end
