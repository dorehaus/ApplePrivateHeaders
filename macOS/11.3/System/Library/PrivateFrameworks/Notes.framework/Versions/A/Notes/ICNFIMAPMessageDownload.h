/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICNFIMAPCompoundDownload.h>

@protocol ICNFIMAPMessage;
@class ICNFMCMimePart;

@interface ICNFIMAPMessageDownload : ICNFIMAPCompoundDownload {

	id<ICNFIMAPMessage> _message;
	unsigned _usingPartialDownloads : 1;
	unsigned _startedFetch : 1;
	unsigned _fetchingBodyText : 1;
	unsigned _doneAddingSubdownloads : 1;
	char _allowsPartialDownloads;
	char _writesCacheFile;
	ICNFMCMimePart* _topLevelPart;

}

@property (retain) ICNFMCMimePart * topLevelPart;              //@synthesize topLevelPart=_topLevelPart - In the implementation block
@property (retain) id<ICNFIMAPMessage> message; 
@property (assign) char allowsPartialDownloads;                //@synthesize allowsPartialDownloads=_allowsPartialDownloads - In the implementation block
@property (assign) char writesCacheFile;                       //@synthesize writesCacheFile=_writesCacheFile - In the implementation block
-(void)dealloc;
-(id)data;
-(id<ICNFIMAPMessage>)message;
-(void)setMessage:(id<ICNFIMAPMessage>)arg1 ;
-(char)isComplete;
-(id)initWithMessage:(id)arg1 ;
-(char)allowsPartialDownloads;
-(id)createCopy;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(void)setAllowsPartialDownloads:(char)arg1 ;
-(void)setWritesCacheFile:(char)arg1 ;
-(char)writesCacheFile;
-(ICNFMCMimePart *)topLevelPart;
-(void)setTopLevelPart:(ICNFMCMimePart *)arg1 ;
-(void)_addMimeSubdownloadsToPipeline:(id)arg1 withCache:(id)arg2 ;
@end

