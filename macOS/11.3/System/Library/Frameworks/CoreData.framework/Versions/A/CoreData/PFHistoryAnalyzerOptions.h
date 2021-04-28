/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFHistoryAnalyzerOptions : NSObject <NSCopying> {

	char _automaticallyPruneTransientRecords;
	unsigned long long _transactionLimit;

}

@property (assign,nonatomic) char automaticallyPruneTransientRecords;              //@synthesize automaticallyPruneTransientRecords=_automaticallyPruneTransientRecords - In the implementation block
@property (assign,nonatomic) unsigned long long transactionLimit;                  //@synthesize transactionLimit=_transactionLimit - In the implementation block
-(char)automaticallyPruneTransientRecords;
-(void)setAutomaticallyPruneTransientRecords:(char)arg1 ;
-(unsigned long long)transactionLimit;
-(void)setTransactionLimit:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
