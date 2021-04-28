/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUInputStream.h>

@protocol SFUInputStream;
@class SFUCryptor, NSString;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {

	id<SFUInputStream> mBaseStream;
	SFUCryptor* mCryptor;
	long long mOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(long long)offset;
-(void)seekToOffset:(long long)arg1 ;
-(id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(char)canSeek;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
@end

