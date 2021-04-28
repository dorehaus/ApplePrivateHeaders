/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSKit/TSKCOAbstractOperation.h>

@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation {

	char _isDominating;
	int _fromIndex;
	int _toIndex;

}

@property (nonatomic,readonly) int fromIndex;                  //@synthesize fromIndex=_fromIndex - In the implementation block
@property (nonatomic,readonly) int toIndex;                    //@synthesize toIndex=_toIndex - In the implementation block
@property (nonatomic,readonly) int placementType; 
@property (nonatomic,readonly) char isDominating;              //@synthesize isDominating=_isDominating - In the implementation block
+(id)stringForPlacementType:(int)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)fromIndex;
-(int)toIndex;
-(id)toString;
-(int)placementType;
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(char)arg4 noop:(char)arg5 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(char)isDominating;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 ;
-(id)operationWithNewNoop:(char)arg1 ;
@end

