/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUObjectGraph.h>
#import <libobjc.A.dylib/VMUCommonGraphInterface.h>

@class VMUTaskMemoryScanner, NSArray, NSString, VMURangeToStringMap, NSDictionary, VMUNodeToStringMap, VMUGraphStackLogReader, VMUDebugTimer, VMUClassInfoMap;

@interface VMUProcessObjectGraph : VMUObjectGraph <VMUCommonGraphInterface> {

	int _pid;
	VMUTaskMemoryScanner* _scanner;
	unsigned _vmPageSize;
	unsigned _kernelPageSize;
	unsigned long long _machAbsolute;
	NSArray* _regions;
	unsigned _regionCount;
	NSArray* _zoneNames;
	NSString* _processName;
	NSString* _processDescriptionString;
	NSString* _executablePath;
	NSString* _binaryImagesDescription;
	VMURangeToStringMap* _threadNameRanges;
	VMURangeToStringMap* _binarySectionNameRanges;
	VMURangeToStringMap* _regionSymbolNameRanges;
	char _gotObjcClassStructureRanges;
	char _showRawClassNames;
	NSDictionary* _pthreadOffsets;
	VMUNodeToStringMap* _nodeLabels;
	void* _userMarked;
	VMUGraphStackLogReader* _stackLogReader;
	VMUDebugTimer* _debugTimer;
	unsigned long long _physicalFootprint;
	unsigned long long _physicalFootprintPeak;
	char _showsPhysFootprint;
	unsigned _objectContentLevel;
	unsigned _objectContentLevelForNodeLabels;
	NSDictionary* _srcAddressToExtraAutoreleaseCountDict;

}

@property (assign,nonatomic) unsigned long long snapshotMachTime;                               //@synthesize machAbsolute=_machAbsolute - In the implementation block
@property (assign,nonatomic) unsigned long long physicalFootprint;                              //@synthesize physicalFootprint=_physicalFootprint - In the implementation block
@property (assign,nonatomic) unsigned long long physicalFootprintPeak;                          //@synthesize physicalFootprintPeak=_physicalFootprintPeak - In the implementation block
@property (nonatomic,retain) NSDictionary * srcAddressToExtraAutoreleaseCountDict;              //@synthesize srcAddressToExtraAutoreleaseCountDict=_srcAddressToExtraAutoreleaseCountDict - In the implementation block
@property (assign,nonatomic,__weak) VMUTaskMemoryScanner * scanner;                             //@synthesize scanner=_scanner - In the implementation block
@property (nonatomic,retain) VMUDebugTimer * debugTimer;                                        //@synthesize debugTimer=_debugTimer - In the implementation block
@property (nonatomic,retain) id<VMUStackLogReader> stackLogReader;                              //@synthesize stackLogReader=_stackLogReader - In the implementation block
@property (assign,nonatomic) char showRawClassNames;                                            //@synthesize showRawClassNames=_showRawClassNames - In the implementation block
@property (assign,nonatomic) char showsPhysFootprint;                                           //@synthesize showsPhysFootprint=_showsPhysFootprint - In the implementation block
@property (assign,nonatomic) unsigned objectContentLevel;                                       //@synthesize objectContentLevel=_objectContentLevel - In the implementation block
@property (assign,nonatomic) unsigned objectContentLevelForNodeLabels;                          //@synthesize objectContentLevelForNodeLabels=_objectContentLevelForNodeLabels - In the implementation block
@property (nonatomic,readonly) int pid;                                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) char is64bit; 
@property (nonatomic,readonly) unsigned vmPageSize;                                             //@synthesize vmPageSize=_vmPageSize - In the implementation block
@property (nonatomic,readonly) unsigned kernelPageSize;                                         //@synthesize kernelPageSize=_kernelPageSize - In the implementation block
@property (nonatomic,readonly) VMUClassInfoMap * realizedClasses; 
@property (nonatomic,readonly) unsigned zoneCount; 
@property (nonatomic,readonly) unsigned regionCount;                                            //@synthesize regionCount=_regionCount - In the implementation block
@property (nonatomic,readonly) unsigned nodeCount; 
@property (nonatomic,readonly) unsigned nodeNamespaceSize; 
@property (nonatomic,readonly) NSString * processName; 
@property (nonatomic,readonly) NSString * processDescriptionString; 
@property (nonatomic,readonly) NSString * executablePath;                                       //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * binaryImagesDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(int)pid;
-(NSString *)executablePath;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setObjectContentLevel:(unsigned)arg1 ;
-(char)is64bit;
-(NSString *)binaryImagesDescription;
-(unsigned long long)physicalFootprint;
-(unsigned long long)physicalFootprintPeak;
-(VMUClassInfoMap *)realizedClasses;
-(void)refineTypesWithOverlay:(id)arg1 ;
-(unsigned)objectContentLevel;
-(void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2 ;
-(id)initWithPid:(int)arg1 nodes:(VMUBlockNode*)arg2 nodeCount:(unsigned)arg3 zoneNames:(id)arg4 classInfoMap:(id)arg5 regions:(id)arg6 pthreadOffsets:(id)arg7 userMarked:(void*)arg8 ;
-(void)setSnapshotMachTime:(unsigned long long)arg1 ;
-(void)setScanner:(VMUTaskMemoryScanner *)arg1 ;
-(void)setDebugTimer:(VMUDebugTimer *)arg1 ;
-(void)setShowRawClassNames:(char)arg1 ;
-(void)setProcessDescriptionString:(NSString *)arg1 ;
-(void)setBinaryImagesDescription:(NSString *)arg1 ;
-(void)setPhysicalFootprint:(unsigned long long)arg1 ;
-(void)setPhysicalFootprintPeak:(unsigned long long)arg1 ;
-(void)setObjectContentLevelForNodeLabels:(unsigned)arg1 ;
-(void)setSrcAddressToExtraAutoreleaseCountDict:(NSDictionary *)arg1 ;
-(void)setShowsPhysFootprint:(char)arg1 ;
-(id)labelForNode:(unsigned)arg1 ;
-(void)setLabel:(id)arg1 forNode:(unsigned)arg2 ;
-(void)setBinarySectionName:(id)arg1 forRange:(VMURange)arg2 ;
-(void)setRegionSymbolName:(id)arg1 forRange:(VMURange)arg2 ;
-(void)setThreadName:(id)arg1 forRange:(VMURange)arg2 ;
-(void)setStackLogReader:(id<VMUStackLogReader>)arg1 ;
-(id)vmuVMRegionForAddress:(unsigned long long)arg1 ;
-(void*)contentForNode:(unsigned)arg1 ;
-(void*)copyUserMarked;
-(id)zoneNameForIndex:(unsigned)arg1 ;
-(id)vmuVMRegionForNode:(unsigned)arg1 ;
-(unsigned)enumerateRegionsWithBlock:(/*^block*/id)arg1 ;
-(char)hasLabelsForNodes;
-(id)shortLabelForNode:(unsigned)arg1 ;
-(unsigned)vmPageSize;
-(unsigned)kernelPageSize;
-(unsigned)zoneCount;
-(unsigned)regionCount;
-(NSString *)processDescriptionString;
-(id)nodeDescription:(unsigned)arg1 ;
-(id)nodeDescription:(unsigned)arg1 withOffset:(unsigned long long)arg2 ;
-(VMUDebugTimer *)debugTimer;
-(char)showRawClassNames;
-(id)nodeDescription:(unsigned)arg1 withOffset:(unsigned long long)arg2 showLabel:(char)arg3 ;
-(void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2 options:(unsigned)arg3 ;
-(VMUTaskMemoryScanner *)scanner;
-(id<VMUStackLogReader>)stackLogReader;
-(void)markRootNodes:(void*)arg1 ;
-(id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3 diskLogs:(id)arg4 error:(id*)arg5 ;
-(void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_deriveObjcClassStructureRanges;
-(VMURange)rangeForSymbolName:(id)arg1 inRegion:(id)arg2 ;
-(unsigned)enumerateReferencesFromDataRegion:(id)arg1 atGlobalSymbol:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(unsigned)objectContentLevelForNodeLabels;
-(void)_renameWithNodeMap:(unsigned*)arg1 nodeNamespace:(unsigned)arg2 edgeMap:(unsigned*)arg3 edgeNamespace:(unsigned)arg4 ;
-(id)binarySectionNameForAddress:(unsigned long long)arg1 ;
-(VMURange)binarySectionRangeContainingAddress:(unsigned long long)arg1 ;
-(id)regionSymbolNameForAddress:(unsigned long long)arg1 ;
-(VMURange)regionSymbolRangeContainingAddress:(unsigned long long)arg1 ;
-(id)threadNameForAddress:(unsigned long long)arg1 ;
-(id)_detailedNodeOffsetDescription:(SCD_Struct_VM3)arg1 withSourceNode:(unsigned)arg2 destinationNode:(unsigned)arg3 alignmentSpacing:(unsigned)arg4 ;
-(id)_descriptionForRegionAddress:(unsigned long long)arg1 withOffset:(unsigned long long)arg2 showSegment:(char)arg3 ;
-(char)nodeIsAutoreleasePoolContentPage:(unsigned)arg1 ;
-(char)nodeDetailIsAutoreleasePoolContentPage:(SCD_Struct_VM2)arg1 ;
-(unsigned)nodeReferencedFromDataRegion:(id)arg1 byGlobalSymbol:(id)arg2 ;
-(void)setUserMarked:(void*)arg1 ;
-(id)shortNodeDescription:(unsigned)arg1 ;
-(id)nodeDescription:(unsigned)arg1 withDestinationNode:(unsigned)arg2 referenceInfo:(SCD_Struct_VM3)arg3 ;
-(id)nodeOffsetDescription:(SCD_Struct_VM3)arg1 withSourceNode:(unsigned)arg2 destinationNode:(unsigned)arg3 ;
-(id)referenceDescription:(SCD_Struct_VM3)arg1 withSourceNode:(unsigned)arg2 destinationNode:(unsigned)arg3 alignmentSpacing:(unsigned)arg4 ;
-(void)refineEdges:(unsigned)arg1 withOptions:(unsigned)arg2 markingInvalid:(void*)arg3 ;
-(void)removeWeakEdges;
-(void)markLeafNodes:(void*)arg1 ;
-(unsigned long long)snapshotMachTime;
-(char)showsPhysFootprint;
-(NSDictionary *)srcAddressToExtraAutoreleaseCountDict;
@end

