/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Versions/A/ExchangeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EXSXPCInterface.h>

@class EXSSyncEngine;

@interface EXSXPCInterfaceImplementation : NSObject <EXSXPCInterface> {

	EXSSyncEngine* _syncEngine;

}

@property (nonatomic,retain) EXSSyncEngine * syncEngine;              //@synthesize syncEngine=_syncEngine - In the implementation block
-(void)setSyncEngine:(EXSSyncEngine *)arg1 ;
-(void)reevaluateAccounts;
-(id)initWithSyncEngine:(id)arg1 ;
-(EXSSyncEngine *)syncEngine;
@end

