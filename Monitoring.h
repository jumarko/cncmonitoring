#include "TemperaturMonitor.h"
#include "SelfDIagnosisMonitor.h"
#include "PartDimensionMonitor.h"
#include "OperatingDurationMonitor.h"

typedef enum MonitorType
{
	EN_MONITORTYPE_ENVIRONMENT,
	EN_MONITORTYPE_MACHINE
}MonitorType;

typedef enum EnvironmentMonitorType
{
	EN_ENVIRONMENTTYPE_TEMPERATURE
}EnvironmentMonitorType;

typedef enum MachineMonitorType
{
	EN_MACHINEMONITOR_PARTDIM,
	EN_MACHINEMONITOR_DURATION,
	EN_MACHINEMONITOR_SELFDIAG
}MachineMonitorType;



class CNCMonitorFacade
{
public:
	CNCMonitorFacade();
	~CNCMonitorFacade();
private:
	TemperatureMonitor* tempMonitor;
	SelfDiagnosisMonitor* _selfDiagMonitor;
	PartDimensionMonitor* _partDimensionMonitor;
	OperatingDurationMonitor* _durationMonitor;

};
