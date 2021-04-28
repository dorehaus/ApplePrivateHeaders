/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSKit/TSKCOIdPlacementBaseOperation.h>

@interface TSKCOIdPlacementPlacementOperation : TSKCOIdPlacementBaseOperation
-(int)placementType;
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(char)arg4 noop:(char)arg5 ;
-(shared_ptr<TSKCO::AbstractOperation>*)newTransformableOperation;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(char)arg4 ;
@end

