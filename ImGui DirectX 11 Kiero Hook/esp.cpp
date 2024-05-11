#include "manager.h"
#include "esp.h"


void KFNEsp::RenderESP()
{
	if (!manager->m_pConfig->esp.enabled)
		return;
	RenderNameplates();
}

void KFNEsp::RenderNameplates()
{

}

