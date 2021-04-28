/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface ASDGatherLogsRequestOptions : NSObject <NSCopying> {

	char _verbose;
	NSString* _fileName;
	NSArray* _urlFilters;

}

@property (nonatomic,copy) NSString * fileName;               //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) char verbose;                    //@synthesize verbose=_verbose - In the implementation block
@property (nonatomic,copy) NSArray * urlFilters;              //@synthesize urlFilters=_urlFilters - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileName;
-(char)verbose;
-(void)setVerbose:(char)arg1 ;
-(NSArray *)urlFilters;
-(void)setUrlFilters:(NSArray *)arg1 ;
@end

