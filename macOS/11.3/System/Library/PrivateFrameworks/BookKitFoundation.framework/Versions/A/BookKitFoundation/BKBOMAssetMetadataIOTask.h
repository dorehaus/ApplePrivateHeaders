/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookKitFoundation.framework/Versions/A/BookKitFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookKitFoundation/BookKitFoundation-Structs.h>
#import <BookKitFoundation/BKAssetMetadataIOTask.h>

@class NSError;

@interface BKBOMAssetMetadataIOTask : BKAssetMetadataIOTask {

	char _cancelled;
	BOMCopierRef _copier;
	NSError* _bomError;
	unsigned long long _totalBytes;
	unsigned long long _bytesSoFar;

}

@property (assign,nonatomic) BOMCopierRef copier;                            //@synthesize copier=_copier - In the implementation block
@property (nonatomic,retain) NSError * bomError;                             //@synthesize bomError=_bomError - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                  //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSoFar;                  //@synthesize bytesSoFar=_bytesSoFar - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(void)cancel;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(unsigned long long)totalBytes;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(void)setCopier:(BOMCopierRef)arg1 ;
-(BOMCopierRef)copier;
-(unsigned long long)bytesSoFar;
-(void)setBytesSoFar:(unsigned long long)arg1 ;
-(id)executeWithTargetDirectory:(id)arg1 error:(id*)arg2 ;
-(NSError *)bomError;
-(void)setBomError:(NSError *)arg1 ;
@end

