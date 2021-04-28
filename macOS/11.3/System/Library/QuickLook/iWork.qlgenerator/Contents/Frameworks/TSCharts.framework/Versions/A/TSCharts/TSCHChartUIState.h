/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSCharts/TSKUIState.h>

@class NSString;

@interface TSCHChartUIState : NSObject <NSCopying, TSKUIState> {

	char _useFullKeyboard;
	char _isValidMultiDataSetIndex;
	unsigned long long _lastRowSelectedInCDE;
	unsigned long long _lastRowCountInCDE;
	unsigned long long _lastColSelectedInCDE;
	unsigned long long _lastColCountInCDE;
	unsigned long long _multiDataSetIndex;

}

@property (nonatomic,readonly) unsigned long long lastRowSelectedInCDE;              //@synthesize lastRowSelectedInCDE=_lastRowSelectedInCDE - In the implementation block
@property (nonatomic,readonly) unsigned long long lastRowCountInCDE;                 //@synthesize lastRowCountInCDE=_lastRowCountInCDE - In the implementation block
@property (nonatomic,readonly) unsigned long long lastColSelectedInCDE;              //@synthesize lastColSelectedInCDE=_lastColSelectedInCDE - In the implementation block
@property (nonatomic,readonly) unsigned long long lastColCountInCDE;                 //@synthesize lastColCountInCDE=_lastColCountInCDE - In the implementation block
@property (nonatomic,readonly) unsigned long long multiDataSetIndex;                 //@synthesize multiDataSetIndex=_multiDataSetIndex - In the implementation block
@property (nonatomic,readonly) char useFullKeyboard;                                 //@synthesize useFullKeyboard=_useFullKeyboard - In the implementation block
@property (nonatomic,readonly) char isValidMultiDataSetIndex;                        //@synthesize isValidMultiDataSetIndex=_isValidMultiDataSetIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)initWithArchive:(const ChartUIState*)arg1 ;
-(void)saveToArchive:(ChartUIState*)arg1 ;
-(void)resetForInitialViewing;
-(unsigned long long)multiDataSetIndex;
-(char)isValidMultiDataSetIndex;
-(id)initWithRowRange:(NSRange)arg1 colRange:(NSRange)arg2 useFullKeyboard:(char)arg3 multiDataSetIndex:(unsigned long long)arg4 ;
-(id)initWithRowRange:(NSRange)arg1 colRange:(NSRange)arg2 useFullKeyboard:(char)arg3 multiDataSetIndex:(unsigned long long)arg4 validIndex:(char)arg5 ;
-(unsigned long long)lastRowSelectedInCDE;
-(unsigned long long)lastRowCountInCDE;
-(unsigned long long)lastColSelectedInCDE;
-(unsigned long long)lastColCountInCDE;
-(char)useFullKeyboard;
-(id)initWithRowRange:(NSRange)arg1 colRange:(NSRange)arg2 useFullKeyboard:(char)arg3 ;
@end

