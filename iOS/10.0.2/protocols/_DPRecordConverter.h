/* Generated by RuntimeBrowser.
 */

@protocol _DPRecordConverter

@required

- (bool)copyRecord:(id <_DPStorageMOConversion>)arg1 intoManagedObject:(NSManagedObject *)arg2;
- (<_DPStorageMOConversion> *)createRecordFromManagedObject:(NSManagedObject *)arg1;
- (NSArray *)insertRecords:(NSArray *)arg1 inManagedObjectContext:(NSManagedObjectContext *)arg2;
- (NSArray *)updateRecords:(NSArray *)arg1 inManagedObjectContext:(NSManagedObjectContext *)arg2;

@end
