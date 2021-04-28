/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailCore/MCProgressEntry.h>

@interface MCByteStatusProgressEntry : MCProgressEntry {

	long long _totalBytes;

}

@property (assign,nonatomic) long long totalBytes;              //@synthesize totalBytes=_totalBytes - In the implementation block
+(id)keyPathsForValuesAffectingStatusText;
-(char)indeterminate;
-(id)statusText;
-(long long)totalBytes;
-(void)setTotalBytes:(long long)arg1 ;
-(void)refreshValues;
-(id)observedProgressKeyPaths;
@end

